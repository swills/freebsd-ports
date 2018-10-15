# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-JQuery/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	JQuery
PORTVERSION=	1.06
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PETERG
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Interface to Jquery, a language based on JavaScript

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-Application>=0:www/p5-CGI-Application \
		p5-CSS>=0:textproc/p5-CSS \
		p5-HTML-Table>=0:www/p5-HTML-Table \
		p5-IO-String>=0:devel/p5-IO-String \
		p5-XML-Writer>=0:textproc/p5-XML-Writer

USE_PERL5=	modbuild
USES=		perl5 shebangfix

SHEBANG_FILES=	lib/JQuery/cgi-bin/*.pl

.include <bsd.port.mk>
