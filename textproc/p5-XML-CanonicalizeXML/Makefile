# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/textproc/p5-XML-CanonicalizeXML/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-CanonicalizeXML
PORTVERSION=	0.03
PORTREVISION=	3
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Extension for inclusive/exclusive canonicalization of XML

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	libxml2.so:textproc/libxml2

USE_PERL5=	configure
USES=		perl5

MAKE_JOBS_UNSAFE=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/XML/CanonicalizeXML/CanonicalizeXML.so

.include <bsd.port.mk>
