# $FreeBSD: head/net/rubygem-geoip/Makefile 440345 2017-05-07 16:00:26Z miwi $

PORTNAME=	geoip
PORTVERSION=	1.6.3
PORTREVISION=	1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Geoip implementation for rubygems

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	geoiplookup:net/GeoIP

REINPLACE_ARGS=	-i ''
NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/geoip

post-patch:
	@${REINPLACE_CMD} -e '1d' ${WRKSRC}/test/csvORG2dat.py

.include <bsd.port.mk>
