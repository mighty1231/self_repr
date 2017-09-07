def self_generator_c(infname, outfname, lineno=3):
    with open(infname, 'rt') as f:
        orig_text = f.readlines()
        res = []

        for line in orig_text[lineno:]:
            for c in line:
                if c == '\t':
                    res.append("\t'\\t',\n")
                elif c == '\n':
                    res.append("\t'\\n',\n")
                elif c == '\\':
                    res.append("\t'\\\\',\n")
                elif c == '\'':
                    res.append("\t'\\'',\n")
                else:
                    res.append("\t'%c',\n" % c)


        ret = orig_text[:lineno] + res + orig_text[lineno:]

    with open(outfname, 'wt') as f:
        f.write(''.join(ret))

self_generator_c('base.c', 'self.c')


