# Created by: Jin-Shan Tseng <tjs@cdpa.nsysu.edu.tw>
# $FreeBSD: head/textproc/p5-Lingua-EN-NamedEntity/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Lingua-EN-NamedEntity
PORTVERSION=	1.93
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Basic Named Entity Extraction algorithm

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Lingua-Stem>=0:textproc/p5-Lingua-Stem
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
