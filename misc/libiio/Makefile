# $FreeBSD: head/misc/libiio/Makefile 492508 2019-02-09 19:54:43Z yuri $

PORTNAME=	libiio
DISTVERSIONPREFIX=	v
DISTVERSION=	0.17
CATEGORIES=	misc

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library for interfacing with local and remote IIO devices

LICENSE=	BSL
LICENSE_FILE=	${WRKSRC}/COPYING.txt

LIB_DEPENDS=	libavahi-client.so:net/avahi-app

USES=		cmake gnome
USE_GITHUB=	yes
GH_ACCOUNT=	analogdevicesinc
USE_GNOME=	libxml2
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	*

.include <bsd.port.mk>
