# $FreeBSD: head/www/rubygem-toml-rb10/Makefile 469442 2018-05-09 10:43:26Z mfechner $

PORTNAME=	toml-rb
PORTVERSION=	1.0.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	10

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	TOML parser using Citrus parsing library

LICENSE=	MIT

RUN_DEPENDS=	rubygem-citrus>=3.0:textproc/rubygem-citrus

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PORTSCOUT=	limit:^1\.0\.

.include <bsd.port.mk>
