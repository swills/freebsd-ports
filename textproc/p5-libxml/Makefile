# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: head/textproc/p5-libxml/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	libxml
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/XML
PKGNAMEPREFIX=	p5-
DISTNAME=	libxml-perl-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Collection of Perl5 modules for working with XML

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
