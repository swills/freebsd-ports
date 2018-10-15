# Created by: snowchyld
# $FreeBSD: head/textproc/p5-Hash-Merge/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Hash-Merge
PORTVERSION=	0.300
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Merges hashes

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Clone-Choose>=0.008:devel/p5-Clone-Choose

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
