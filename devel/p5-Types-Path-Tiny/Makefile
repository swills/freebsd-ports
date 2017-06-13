# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/p5-Types-Path-Tiny/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Types-Path-Tiny
PORTVERSION=	0.005
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Path::Tiny types and coercions for Moose and Moo

LICENSE=	APACHE20

BUILD_DEPENDS=	p5-Path-Tiny>=0:devel/p5-Path-Tiny \
		p5-Type-Tiny>=0.008:devel/p5-Type-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-File-pushd>=0:devel/p5-File-pushd

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
