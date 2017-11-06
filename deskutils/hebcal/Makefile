# Created by: Edwin Groothuis
# $FreeBSD: head/deskutils/hebcal/Makefile 453491 2017-11-04 22:38:43Z cpm $

PORTNAME=	hebcal
PORTVERSION=	4.13
DISTVERSIONPREFIX=	v
CATEGORIES=	deskutils

MAINTAINER=	rtd24@columbia.edu
COMMENT=	Perpetual Jewish calendar

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake perl5
GNU_CONFIGURE=	yes

USE_GITHUB=	yes

PLIST_FILES=	bin/hebcal \
		man/man1/hebcal.1.gz

regression-test: build
	(cd ${WRKSRC} && ${MAKE_CMD} check)

.include <bsd.port.mk>
