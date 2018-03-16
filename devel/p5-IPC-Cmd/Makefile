# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-IPC-Cmd/Makefile 464575 2018-03-15 08:15:44Z tobik $

PORTNAME=	IPC-Cmd
PORTVERSION=	0.98
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Finding and running system commands made easy

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IPC-Run>=0.55:devel/p5-IPC-Run
RUN_DEPENDS=	p5-IPC-Run>=0.55:devel/p5-IPC-Run

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
