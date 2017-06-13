# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/x11-toolkits/tktreectrl/Makefile 413747 2016-04-21 16:48:50Z gahr $

PORTNAME=	tktreectrl
PORTVERSION=	2.4.1
CATEGORIES=	x11-toolkits tk
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multi-column hierarchical listbox widget

USES=		tk:86,tea
USE_XORG=	x11
TCL_PKG=	treectrl${PORTVERSION}
USE_LDCONFIG=	${PREFIX}/lib/${TCL_PKG}
PLIST_SUB=	TCL_PKG=${TCL_PKG}

post-patch:
	@${REINPLACE_CMD} -e 's/FreeBSD-\*/FreeBSD-*|DragonFly-*/' \
		${WRKSRC}/configure

.include <bsd.port.mk>
