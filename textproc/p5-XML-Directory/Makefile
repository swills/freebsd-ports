# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/textproc/p5-XML-Directory/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-Directory
PORTVERSION=	1.00
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Returns a content of directory as XML

BUILD_DEPENDS=	p5-RDF-Notation3>=0:textproc/p5-RDF-Notation3 \
		p5-XML-SAX>=0:textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
