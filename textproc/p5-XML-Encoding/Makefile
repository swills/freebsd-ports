# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/textproc/p5-XML-Encoding/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-Encoding
PORTVERSION=	2.09
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for parsing XML encoding maps

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
