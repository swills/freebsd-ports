# Created by: Alexandre Snarskii <snar@snar.spb.ru>
# $FreeBSD: head/net-mgmt/bgpq3/Makefile 486254 2018-11-30 14:20:17Z swills $

PORTNAME=	bgpq3
PORTVERSION=	0.1.35
DISTVERSIONPREFIX=v
CATEGORIES=	net-mgmt

MAINTAINER=	snar@snar.spb.ru
COMMENT=	Lightweight prefix-list generator for various routers

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USE_GITHUB=	yes
GH_ACCOUNT=	snar

PLIST_FILES=	bin/bgpq3 \
		man/man8/bgpq3.8.gz
HAS_CONFIGURE=	yes
CONFIGURE_ARGS+=--prefix=${STAGEDIR}${PREFIX}

.include <bsd.port.mk>
