# Created by: Robert Gogolok <gogo@cs.uni-sb.de>
# $FreeBSD: head/www/rubygem-haml4/Makefile 440136 2017-05-04 23:48:03Z sunpoet $

PORTNAME=	haml
PORTVERSION=	4.0.7
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	4

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Markup language to describe HTML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-tilt>=0:devel/rubygem-tilt

PORTSCOUT=	limit:^4\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/haml

.include <bsd.port.mk>
