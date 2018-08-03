# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/misc/p5-Business-ISSN/Makefile 476216 2018-08-02 05:06:20Z bofh $

PORTNAME=	Business-ISSN
PORTVERSION=	1.003
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Perl extension for International Standard Serial Numbers

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,Business-ISSN,Business::ISSN,' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
