# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/games/lpairs/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	lpairs
PORTVERSION=	1.0.4
PORTREVISION=	4
CATEGORIES=	games
MASTER_SITES=	SF/lgames/${PORTNAME}/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Classical memory game

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes
USE_SDL=	sdl
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/${PORTNAME}
PORTDATA=	*

OPTIONS_DEFINE=	NLS
NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls
NLS_CONFIGURE_ON=	--with-libintl-prefix=${LOCALBASE}
NLS_PLIST_FILES=	share/locale/de/LC_MESSAGES/lpairs.mo

post-patch:
	@${REINPLACE_CMD} -e '/^LIBS =/ s|$$| $${INTLLIBS}|' \
		${WRKSRC}/lpairs/Makefile.in
	@${REINPLACE_CMD} -e 's|^\(inst_dir=\).*|\1$$datarootdir/lpairs|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
