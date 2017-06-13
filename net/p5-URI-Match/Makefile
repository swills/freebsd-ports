# $FreeBSD: head/net/p5-URI-Match/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	URI-Match
PORTVERSION=	0.00001
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for matching URLs by parts

RUN_DEPENDS=	\
	p5-URI>0:net/p5-URI
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
