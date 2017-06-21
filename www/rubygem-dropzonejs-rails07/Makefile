# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/www/rubygem-dropzonejs-rails07/Makefile 443655 2017-06-15 21:52:06Z sunpoet $

PORTNAME=	dropzonejs-rails
PORTVERSION=	0.7.4
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	07

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	JS File upload by Matias Meno

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-rails4>=3.1:www/rubygem-rails4

PORTSCOUT=	limit:^0\.7\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
