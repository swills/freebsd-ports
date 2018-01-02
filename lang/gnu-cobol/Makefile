# Created by: ijliao
# $FreeBSD: head/lang/gnu-cobol/Makefile 457215 2017-12-25 10:58:40Z johans $

PORTNAME=	gnu-cobol
PORTVERSION=	2.2
CATEGORIES=	lang
MASTER_SITES=	GNU/gnucobol
DISTNAME=	gnucobol-${PORTVERSION}

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Open-source COBOL compiler

LICENSE=	GPLv3 LGPL3
LICENSE_COMB=	multi

LIB_DEPENDS=	libgmp.so:math/gmp

USES=		bdb gmake libtool ncurses tar:xz
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes

INFO=		gnucobol
DATADIR=	${PREFIX}/share/gnucobol

INSTALL_TARGET=	install-strip
CPPFLAGS+=	-I${BDB_INCLUDE_DIR} -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext
CONFIGURE_ENABLE=nls

post-patch:
	@${REINPLACE_CMD} -e 's|__gmp_randinit|__gmpz_init|g ; \
		 s|db-4.[0-9]|${BDB_LIB_NAME}|g ; \
		 s|-lcurses|-lncurses|g ; \
		 s|-R$$found_dir|-Wl,-rpath,$$found_dir|g' ${WRKSRC}/configure

.include <bsd.port.mk>
