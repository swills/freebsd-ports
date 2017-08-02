# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/net/rubygem-whois/Makefile 446926 2017-07-30 13:13:15Z sunpoet $

PORTNAME=	whois
PORTVERSION=	4.0.4
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
