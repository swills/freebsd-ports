# $FreeBSD: head/www/rubygem-toml-rb10/Makefile 467209 2018-04-13 06:15:09Z mfechner $

PORTNAME=	toml-rb
PORTVERSION=	1.0.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	10

MAINTAINER=	idefix@fechner.net
COMMENT=	TOML parser using Citrus parsing library

LICENSE=	MIT

RUN_DEPENDS=	rubygem-citrus>=3.0:textproc/rubygem-citrus

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PORTSCOUT=	limit:^1\.0\.

.include <bsd.port.mk>
