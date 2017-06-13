# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/textproc/p5-XML-SAXDriver-CSV/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-SAXDriver-CSV
PORTVERSION=	0.07
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl SAX driver for converting CSV files to XML

BUILD_DEPENDS=	p5-Text-CSV_XS>=0.22:textproc/p5-Text-CSV_XS \
		p5-XML-Handler-YAWriter>=0:textproc/p5-XML-Handler-YAWriter \
		p5-XML-SAX>=0.14:textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5 dos2unix
USE_PERL5=	configure

.include <bsd.port.mk>
