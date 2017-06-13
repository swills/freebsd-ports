# Created by: Anton Berezin <tobez@tobez.org>
# $FreeBSD: head/lang/p5-Switch/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	Switch
PORTVERSION=	2.17
PORTREVISION=	1
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CHORNY
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Switch - A switch statement for Perl

BUILD_DEPENDS=	p5-Filter>0:devel/p5-Filter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
