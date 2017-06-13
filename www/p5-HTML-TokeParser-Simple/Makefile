# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: head/www/p5-HTML-TokeParser-Simple/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	HTML-TokeParser-Simple
PORTVERSION=	3.16
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Subclass of HTML::TokeParser with easy-to-remember method calls

BUILD_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Sub-Override>=0:devel/p5-Sub-Override
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
