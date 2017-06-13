# Created by: Shin-ya MURAKAMI <murashin@gfd-dennou.org>
# $FreeBSD: head/math/rubygem-rb-gsl/Makefile 439928 2017-05-02 05:26:40Z tcberner $

PORTNAME=	gsl
PORTVERSION=	2.1.0.2
CATEGORIES=	math rubygems
MASTER_SITES=	RG
PKGNAMEPREFIX=	rubygem-rb-

MAINTAINER=	murashin@gfd-dennou.org
COMMENT=	Ruby extension library for GSL (GNU Scientific Library)

LICENSE=	GPLv2

LIB_DEPENDS=	libgsl.so:math/gsl
RUN_DEPENDS=	rubygem-narray>=0.5.9:math/rubygem-narray

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
