# $FreeBSD: head/databases/p5-RedisDB-Parser/Makefile 427168 2016-11-26 13:09:08Z kuriyama $

PORTNAME=	RedisDB-Parser
PORTVERSION=	2.22
#PORTREVISION=	0
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Redis protocol parser

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-Try-Tiny>0:lang/p5-Try-Tiny
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
