# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/www/p5-HTML-Prototype/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-Prototype
PORTVERSION=	1.48
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generate HTML and JavaScript for the Prototype library

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-HTML-Tree>=0:www/p5-HTML-Tree

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
