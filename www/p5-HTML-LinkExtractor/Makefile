# Created by: Lars Eggert <lars.eggert@gmx.net>
# $FreeBSD: head/www/p5-HTML-LinkExtractor/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-LinkExtractor
PORTVERSION=	0.130
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-0.13

MAINTAINER=	lars.eggert@gmx.net
COMMENT=	HTML::LinkExtractor is used for extracting links from HTML

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-TokeParser-Simple>=0:www/p5-HTML-TokeParser-Simple \
		p5-URI>=0:net/p5-URI

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
