# Created by: vanilla
# $FreeBSD: head/textproc/p5-XML-XSLT/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-XSLT
PORTVERSION=	0.48
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	XML::XSLT - A perl module for processing XSLT

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-DOM>=0:textproc/p5-XML-DOM
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
