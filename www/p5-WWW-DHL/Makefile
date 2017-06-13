# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/www/p5-WWW-DHL/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	WWW-DHL
PORTVERSION=	0.03
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for the DHL online tracking service

BUILD_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-HTML-TokeParser-Simple>=0:www/p5-HTML-TokeParser-Simple \
		p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
