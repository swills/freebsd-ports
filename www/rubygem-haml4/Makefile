# Created by: Robert Gogolok <gogo@cs.uni-sb.de>
# $FreeBSD: head/www/rubygem-haml4/Makefile 462908 2018-02-25 05:32:14Z sunpoet $

PORTNAME=	haml
PORTVERSION=	4.0.7
PORTREVISION=	1
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

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/haml

.include <bsd.port.mk>
