# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/npm-node10/Makefile 483914 2018-11-03 22:15:57Z sunpoet $

PKGNAMESUFFIX=	-node10

CONFLICTS_INSTALL=	npm npm-node6 npm-node8

OPTIONS_EXCLUDE=NODE NODE6 NODE8
OPTIONS_SLAVE=	NODE10

MASTERDIR=	${.CURDIR}/../npm

.include "${MASTERDIR}/Makefile"
