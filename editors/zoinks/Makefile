# Created by: Mike Lockwood <mike@mikelockwood.com>
# $FreeBSD: head/editors/zoinks/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	zoinks
PORTVERSION=	0.4.1
PORTREVISION=	2
CATEGORIES=	editors
MASTER_SITES=	http://zoinks.mikelockwood.com/download/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X11 programmer's editor and development environment

LICENSE=	GPLv2+

USE_XORG=	xpm
GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	@${REINPLACE_CMD} -e \
		's|^MY_CXXFLAGS|#&|' ${WRKSRC}/configure
	@${FIND} ${WRKSRC} -name *.xpm | ${XARGS} ${REINPLACE_CMD} -e \
		's|^"|(char *)"|g'

.include <bsd.port.mk>
