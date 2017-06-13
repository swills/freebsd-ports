# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/p5-SUPER/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	SUPER
PORTVERSION=	1.17
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Perl module control superclass method dispatch

BUILD_DEPENDS=	p5-Sub-Identify>=0.04:devel/p5-Sub-Identify
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
