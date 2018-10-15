# Created by: Alex Kapranoff <kapr@crosswinds.net>
# $FreeBSD: head/www/p5-HTML-FillInForm/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-FillInForm
PORTVERSION=	2.21
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for auto-filling HTML form fields from previous values

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=3.26:www/p5-HTML-Parser
TEST_DEPENDS=	p5-CGI>=0:www/p5-CGI

INSTALL_TARGET=	pure_install
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
