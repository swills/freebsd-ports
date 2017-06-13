# $FreeBSD: head/www/p5-Plack-Middleware-ReverseProxy/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Plack-Middleware-ReverseProxy
PORTVERSION=	0.15
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to support app to run as a reverse proxy backend

RUN_DEPENDS=	\
	p5-Plack>=0.9988:www/p5-Plack
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
