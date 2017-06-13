# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/gtkmm24-reference/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTREVISION=	1

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtkmm-2.4.pc:x11-toolkits/gtkmm24 \
		glibmm-reference>=0:devel/glibmm-reference

USES=		gmake pkgconfig
GNU_CONFIGURE=	yes

DOCSDIR=	${PREFIX}/share/doc/gtkmm-2.4

do-install:
.for d in docs
	@cd ${WRKSRC}/${d} && ${MAKE_CMD} ${MAKE_ARGS} install
.endfor

.include "${.CURDIR}/../../devel/glib20-reference/bsd.gnome-reference.mk"
