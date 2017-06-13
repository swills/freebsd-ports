# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/devel/p5-Term-EditLine/Makefile 438150 2017-04-10 11:37:56Z ehaupt $

PORTNAME=	Term-EditLine
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN \
		LOCAL/ehaupt
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Perl interface to the NetBSD editline library

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		libedit perl5 pkgconfig
USE_PERL5=	configure

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Term/EditLine/EditLine.so

.include <bsd.port.mk>
