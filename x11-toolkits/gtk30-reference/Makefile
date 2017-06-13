# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/gtk30-reference/Makefile 439206 2017-04-23 08:35:28Z kwm $

PORTREVISION=	0

BOOKS=		gdk gtk libgail-util

NO_ARCH=	yes

do-install:
.for d in ${BOOKS}
	if [ -d ${REFERENCE_SRC}/${d}/html ]; then \
		${MKDIR} ${STAGEDIR}${PREFIX}/share/doc/${d}3; \
		cd ${REFERENCE_SRC}/${d}/html && \
		${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/share/doc/${d}3; \
	fi
.endfor

# overwrite this from bsd.port.mk, because we not don't honow DOCSDIR
add-plist-docs:
	@${DO_NADA}

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
