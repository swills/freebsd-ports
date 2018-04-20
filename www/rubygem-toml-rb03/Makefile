# $FreeBSD: head/www/rubygem-toml-rb03/Makefile 467598 2018-04-17 11:24:32Z mfechner $

PORTNAME=	toml-rb
PORTVERSION=	0.3.15
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	03

MAINTAINER=	idefix@fechner.net
COMMENT=	TOML parser using Citrus parsing library

LICENSE=	MIT

DEPRECATED=	Obsoleted by update of www/gitlab. Please use www/rubygem-tom-rb instead.
EXPIRDATION_DATE=	2018-05-31

RUN_DEPENDS=	rubygem-citrus>=3.0:textproc/rubygem-citrus

PORTSCOUT=	limit:^0\.3\.

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
