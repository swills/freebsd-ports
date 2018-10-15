# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: head/www/p5-HTML-TableTiler/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-TableTiler
PORTVERSION=	1.21
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module generate a HTML table from bidimensional array data

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-IO-Util>=0:devel/p5-IO-Util

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
