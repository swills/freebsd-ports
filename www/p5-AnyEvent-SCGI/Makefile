# $FreeBSD: head/www/p5-AnyEvent-SCGI/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	AnyEvent-SCGI
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for Event based SCGI server

RUN_DEPENDS=	\
	p5-AnyEvent>=5.2:devel/p5-AnyEvent
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
