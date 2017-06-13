# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/lang/p5-Interpolation/Makefile 412347 2016-04-01 14:08:37Z mat $

PORTNAME=	Interpolation
PORTVERSION=	0.74
PORTREVISION=	1
CATEGORIES=	lang perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JENDA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implement arbitrary string interpolation semantics for Perl

BUILD_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
