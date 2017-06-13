# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/gtkmm30-reference/Makefile 439206 2017-04-23 08:35:28Z kwm $

PORTREVISION=	0

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtkmm-3.0.pc:x11-toolkits/gtkmm30 \
		glibmm-reference>=0:devel/glibmm-reference

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/gtkmm-3.0

do-install:
.for d in docs
	@cd ${WRKSRC}/${d} && ${MAKE_CMD} ${MAKE_ARGS} install
.endfor

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
