# Created by: ijliao
# $FreeBSD: head/print/p5-PDFLib/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	PDFLib
PORTVERSION=	0.14
PORTREVISION=	1
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	More OO interface to pdflib_pl.pm

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	pdflib-perl>=0:print/pdflib-perl

USES=		perl5
USE_PERL5=	configure
NO_BUILD=	yes

.include <bsd.port.mk>
