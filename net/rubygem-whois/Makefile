# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/net/rubygem-whois/Makefile 445187 2017-07-06 20:58:24Z sunpoet $

PORTNAME=	whois
PORTVERSION=	4.0.2
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby whois library

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-activesupport4>=3:devel/rubygem-activesupport4

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/whoisrb

.include <bsd.port.mk>
