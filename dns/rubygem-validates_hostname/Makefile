# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/dns/rubygem-validates_hostname/Makefile 491723 2019-01-31 14:05:37Z mfechner $

PORTNAME=	validates_hostname
PORTVERSION=	1.0.8
PORTREVISION=	1
CATEGORIES=	dns rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Extension to ActiveRecord::Base for validating hostnames

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activerecord50>=3.0:databases/rubygem-activerecord50 \
		rubygem-activesupport50>=3.0:devel/rubygem-activesupport50

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
