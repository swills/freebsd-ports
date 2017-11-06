# Created by: janos.mohacsi@bsd.hu
# $FreeBSD: head/devel/p5-FileHandle-Fmode/Makefile 453349 2017-11-02 16:14:52Z dbaio $

PORTNAME=	FileHandle-Fmode
PORTVERSION=	0.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Module to determine if a filehandle is opened for reading, writing

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/FileHandle/Fmode/Fmode.so

.include <bsd.port.mk>
