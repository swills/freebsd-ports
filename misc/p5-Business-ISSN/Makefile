# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/misc/p5-Business-ISSN/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Business-ISSN
PORTVERSION=	0.91
PORTREVISION=	1
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension for International Standard Serial Numbers

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -e 's,Business-ISSN,Business::ISSN,' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
