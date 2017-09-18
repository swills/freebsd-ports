# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/textproc/p5-XML-SAX-Writer/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	XML-SAX-Writer
PORTVERSION=	0.57
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	SAX2 XML Writer

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-XML-Filter-BufferText>=1.00:textproc/p5-XML-Filter-BufferText \
		p5-XML-NamespaceSupport>=1.00:textproc/p5-XML-NamespaceSupport \
		p5-XML-SAX-Base>=1.01:textproc/p5-XML-SAX-Base
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
