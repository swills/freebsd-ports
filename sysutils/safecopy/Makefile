# $FreeBSD: head/sysutils/safecopy/Makefile 433587 2017-02-07 20:31:32Z krion $

PORTNAME=	safecopy
PORTVERSION=	1.7
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}/

MAINTAINER=	anastasios@mageirias.com
COMMENT=	Safe copying of files and partition

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gmake
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/safecopy \
		man/man1/safecopy.1.gz

.include <bsd.port.mk>
